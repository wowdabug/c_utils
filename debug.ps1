Write-Output "Compiling... (debug)"
gcc -o debug main.c wdbint.c wdbmath.c -std=c23 -O0 -Wall -Wextra -Werror -Wpedantic

if ($LASTEXITCODE -eq 0) {
	Write-Output "Running..."
	./debug.exe
}
