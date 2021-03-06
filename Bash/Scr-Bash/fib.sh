#!/bin/bash

function get_nth_fib(){

	a1=1
	a2=1

	for i in  $(seq 3 $1); do
			temp=$((a2 + a1))
			a1=$a2
			a2=$temp
		done

	echo $a2 >> $2
	return 
}

function main(){
	for input in $(cat inp_fib); do
		get_nth_fib $input $1
	done
}

output_file="sout"

if [ -f $output_file ]; then
	rm $output_file
fi

main $output_file
