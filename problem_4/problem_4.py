def timeConversion(s):
    t = []
    if s.__contains__('PM'):
        t = s.replace('PM', '').split(':')
        if int(t[0]) != 12:
            t[0] = str(int(t[0])+12)
    else:
        t = s.replace('AM', '').split(':')
        if int(t[0] == '12'):
            t[0] = '00'
    return ":".join(t)


s = '07:05:45PM'
