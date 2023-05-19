def split_and_merg(s, sep):
    s = s.split()
    for i in range(len(s)):
        s[i] = f"{sep}".join(list(s[i]))
    return " ".join(s)

print(split_and_merg("My name is Serg", "+"))