# Leaker

Leaker is a tool to transform leaked CSV file to JSON file
<br>Three Version of Leaker
<br>For linux (C++)
<br>For windows (C++)
<br>In python for windows and linux (not recommended very slow)

## Note

Bug Fixed ;)

<br>Comming Soon:
<br> GUI version

## Photo

![Demo Photo](/Windows.jpg)
![Demo Photo](/Linux.jpg)

## Install

```bash
git clone https://github.com/Hassan-Al-Achek/Leaker.git
#for windows
g++ main.cpp CSVRow.cpp -o leaker.exe

#for linux
g++ main.cpp CSVRow.cpp -o leaker
```

## Run

```bash
# windows
leaker.exe

# linux
./leaker
```

## Transform To HTML

```bash
python3 jsontoHTML.py
```

![Demo Photo](/HTML.jpg)

## Demo

### Before

![Demo Photo](/IN.jpg)

### After

![Demo Photo](/OUT.jpg)
