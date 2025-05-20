fun main() {
    val s = readln()
    val t = readln().toInt()
    val sz = s.length

    val arr = Array(sz + 1) { IntArray(3) }

    for (i in 0 until sz) {
        for (j in 0..2) {
            arr[i + 1][j] = arr[i][j]
        }

        when (s[i]) {
            'G' -> arr[i + 1][0]++
            'S' -> arr[i + 1][1]++
            else -> arr[i + 1][2]++ 
        }
    }

    repeat(t) {
        val (a, b) = readln().split(" ").map { it.toInt() }
        val temp1 = arr[b][0] - arr[a - 1][0]
        val temp2 = arr[b][1] - arr[a - 1][1]
        val temp3 = arr[b][2] - arr[a - 1][2]

        val result = maxOf(temp1, temp2, temp3) + minOf(temp1, temp2, temp3)
        println(result)
    }
}
