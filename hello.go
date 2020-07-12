package main
y
import (
    "fmt"
    "math"
)

/*func max(a, b int) int {
    if a > b {
        return a
    }
    return b
}

func main() {
	x := 3
    y := 4
    z := 5

    max_xy := max(x, y) //呼叫函式 max(x, y)
    max_xz := max(x, z) //呼叫函式 max(x, z)

    fmt.Printf("max(%d, %d) = %d\n", x, y, max_xy)
    fmt.Printf("max(%d, %d) = %d\n", x, z, max_xz)
    fmt.Printf("max(%d, %d) = %d\n", y, z, max(y,z))

}*/

/*var user = os.Getenv("USER")

func init(){
    if user ==""{
        panic("no value for USER")
    }
}*/

type recy struct{
    wid, hei float32
}

type circl struct{
    ra float32
}

func (c circl) area() float32 {
    return c.ra*c.ra*math.Pi
}

func (r recy) area() float32 {
    return r.hei*r.wid
}

func main() {
    r1 :=recy{12,2}
    c1 :=circl{10}
    fmt.Println("Area of r1 is : ",r1.area())
    fmt.Println("Area of c1 is : ",c1.area())
}

