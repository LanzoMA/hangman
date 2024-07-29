# Hangman

## Build and Run Instructions

Before building ensure gcc/g++ (or any C++ compiler) and cmake is installed.

1. Clone this repo

```bash
git clone https://github.com/LanzoMA/hangman.git
```

2. Create `build/` directory

```bash
mkdir build/
```
 
3. Move `config.json` into `build/` directory

```bash
mv config.json build/
```

4. Change directories to `build/` directory

```bash
cd build/
```

5. Run CMake

```
cmake ../
```


6. Run Make

```bash
make
```


7. Run the program

```bash
./hangman
```