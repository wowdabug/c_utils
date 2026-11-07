Write-Output "Compiling... (debug)"
gcc -o debug main.c wmath.c wvec.c wcolor.c wrand.c -std=c23 -O0 -Wall -Wextra -Werror -Wpedantic

if ($LASTEXITCODE -eq 0) {
	Write-Output "Running..."
	./debug.exe
}
