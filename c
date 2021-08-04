#!/bin/zsh
#/bin/c
params=()
output="./a.out"
while [[ $# -ne 0 ]]; do
	case $1 in
		-o)
			params+=("$1")
			shift
			output="$1"
			;;
		end)
			shift
			break
			;;
	esac
	params+=("$1")
	shift
done
TIMEFMT='total   %*E
user    %U
sys     %S
mem     %M MB'
if gcc "${params[@]}"; then
	time "$(realpath "$output")" $@
fi