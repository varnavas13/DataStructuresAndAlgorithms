fun main() {
    val t = readln().toInt()
    repeat(t) {
        val (a, b, c) = readln().split(" ").map { it.toInt() }
        val s = StringBuilder()
 
        for (i in 0 until a) {
            s.append('0' + i)
        }
 
        for (i in 0 until b) {
            s.append('A' + i)
        }
 
        for (i in 0 until c) {
            s.append('a' + i)
        }
 
        println(s.toString())
    }
}
