package main

// #cgo CFLAGS: -g -Wall
// #include <stdlib.h>
// #include "fft.h"
// #include <stdio.h>
import "C"
import (
	"fmt"
	"unsafe"
)

func main() {

	x := C.int(2020)
	y := C.int(2018)

	ptr := C.malloc(C.sizeof_char * 100)
	defer C.free(unsafe.Pointer(ptr))
	//~ C.printf(C.CString("Hello world\n"))
	
	size := C.print(x,y)
	
	b := C.GoBytes(ptr, size)
	fmt.Println(string(b))
}
