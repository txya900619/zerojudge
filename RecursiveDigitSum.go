package main

import "fmt"

func main() {
	n, k, ans := "0", 0, 0
	fmt.Scanf("%s", &n)
	fmt.Scanf("%d", &k)
	for _, v := range n {
		ans += int(v) - '0'
	}
	ans = ans * k % 9
	if ans != 0 {
		fmt.Println(ans)
	} else {
		fmt.Println(9)
	}

}
