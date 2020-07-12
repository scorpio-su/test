package main

import "fmt"

func main() {
	n := 2
	var a [2][2]int
	var b [2][2]int
	var c [2][2]int
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			fmt.Scan(&a[i][j])
		}
	}
	fmt.Println(a)

	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			fmt.Scan(&b[i][j])
		}
	}
	fmt.Println(b)

	/*for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			for k := 0; k < n; k++ {
				c[i][j] += a[i][k] * b[k][j]
			}
		}
	}
	fmt.Println(c)*/

	m1:=

}

/*func set(n int) {
	a := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}
	fmt.Println(a)
	for j := 0; j < n; j++ {
		fmt.Printf("%d ", a[j])
	}
}*/
