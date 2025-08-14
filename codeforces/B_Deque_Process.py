import sys


def main():
    data = sys.stdin.read().split()
    t = int(data[0])
    index = 1
    out_lines = []
    for _ in range(t):
        n = int(data[index])
        index += 1
        p = list(map(int, data[index:index+n]))
        index += n

        left = 0
        right = n - 1
        s = []
        last = None
        inc_run = 0
        dec_run = 0

        for _ in range(n):
            if left > right:
                break

            if last is None:
                if p[left] > p[right]:
                    s.append('L')
                    last = p[left]
                    left += 1
                else:
                    s.append('R')
                    last = p[right]
                    right -= 1
                inc_run = 1
                dec_run = 1
            else:
                candidate_left = p[left]
                candidate_right = p[right]
                safeL = True
                safeR = True
                new_inc_runL = 1
                new_dec_runL = 1
                if candidate_left > last:
                    new_inc_runL = inc_run + 1
                    new_dec_runL = 1
                else:
                    new_inc_runL = 1
                    new_dec_runL = dec_run + 1
                if new_inc_runL >= 5 or new_dec_runL >= 5:
                    safeL = False

                new_inc_runR = 1
                new_dec_runR = 1
                if candidate_right > last:
                    new_inc_runR = inc_run + 1
                    new_dec_runR = 1
                else:
                    new_inc_runR = 1
                    new_dec_runR = dec_run + 1
                if new_inc_runR >= 5 or new_dec_runR >= 5:
                    safeR = False

                if not safeL and not safeR:
                    s.append('L')
                    if candidate_left > last:
                        inc_run = inc_run + 1
                        dec_run = 1
                    else:
                        inc_run = 1
                        dec_run = dec_run + 1
                    last = candidate_left
                    left += 1
                elif safeL and safeR:
                    diffL = abs(candidate_left - last)
                    diffR = abs(candidate_right - last)
                    if diffL >= diffR:
                        s.append('L')
                        if candidate_left > last:
                            inc_run = new_inc_runL
                            dec_run = new_dec_runL
                        else:
                            inc_run = new_inc_runL
                            dec_run = new_dec_runL
                        last = candidate_left
                        left += 1
                    else:
                        s.append('R')
                        if candidate_right > last:
                            inc_run = new_inc_runR
                            dec_run = new_dec_runR
                        else:
                            inc_run = new_inc_runR
                            dec_run = new_dec_runR
                        last = candidate_right
                        right -= 1
                elif safeL:
                    s.append('L')
                    if candidate_left > last:
                        inc_run = new_inc_runL
                        dec_run = new_dec_runL
                    else:
                        inc_run = new_inc_runL
                        dec_run = new_dec_runL
                    last = candidate_left
                    left += 1
                else:
                    s.append('R')
                    if candidate_right > last:
                        inc_run = new_inc_runR
                        dec_run = new_dec_runR
                    else:
                        inc_run = new_inc_runR
                        dec_run = new_dec_runR
                    last = candidate_right
                    right -= 1

        out_lines.append(''.join(s))

    sys.stdout.write("\n".join(out_lines))


if __name__ == "__main__":
    main()
