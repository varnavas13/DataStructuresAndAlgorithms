import java.io.BufferedReader
import java.io.InputStreamReader

fun main() {
    val reader = BufferedReader(InputStreamReader(System.`in`))
    val firstLine = reader.readLine().split(" ")
    val n = firstLine[0].toInt()
    val target = firstLine[1]

    println("? 1")
    System.out.flush()
    val firstHandle = reader.readLine()!!

    val uppercaseFirst = firstHandle[0].isUpperCase()

    fun compareHandles(a: String, b: String): Int {
        if (a[0].isUpperCase() != b[0].isUpperCase()) {
            return if (a[0].isUpperCase() == uppercaseFirst) -1 else 1
        }
        val len = minOf(a.length, b.length)
        for (i in 0 until len) {
            if (a[i] != b[i]) return a[i].compareTo(b[i])
        }
        return a.length.compareTo(b.length)
    }

    var lo = 1
    var hi = n
    var ans = -1
    while (lo <= hi) {
        val mid = (lo + hi) / 2
        println("? $mid")
        System.out.flush()
        val s = reader.readLine()!!
        val cmp = compareHandles(s, target)
        when {
            cmp == 0 -> {
                ans = mid
                break
            }
            cmp < 0 -> {
                lo = mid + 1
            }
            else -> {
                hi = mid - 1
            }
        }
    }
    println("! $ans")
    System.out.flush()
}
