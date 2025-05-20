import java.util.*

fun main() {
    val t = readln().toInt()
    repeat(t) {
        val n = readln().toInt()
        val a = readln().split(" ").map { it.toInt() }.sorted()
        var possible = true
        for (i in 0 until 2 * n step 2) {
            val j = i + 1
            if (j >= 2 * n) break
            val bestI = mutableListOf<Int>()
            if (i == 0) {
                bestI.add(1)
            } else if (i == 2 * n - 1) {
                bestI.add(i - 1)
            } else {
                val leftDiff = a[i] - a[i - 1]
                val rightDiff = a[j] - a[i]
                when {
                    leftDiff < rightDiff -> bestI.add(i - 1)
                    rightDiff < leftDiff -> bestI.add(j)
                    else -> {
                        bestI.add(i - 1)
                        bestI.add(j)
                    }
                }
            }
            val bestJ = mutableListOf<Int>()
            if (j == 0) {
                bestJ.add(1)
            } else if (j == 2 * n - 1) {
                bestJ.add(j - 1)
            } else {
                val leftDiffJ = a[j] - a[j - 1]
                val rightDiffJ = a[j + 1] - a[j]
                when {
                    leftDiffJ < rightDiffJ -> bestJ.add(j - 1)
                    rightDiffJ < leftDiffJ -> bestJ.add(j + 1)
                    else -> {
                        bestJ.add(j - 1)
                        bestJ.add(j + 1)
                    }
                }
            }
            if (j !in bestI || i !in bestJ) {
                possible = false
                break
            }
        }
        println(if (possible) "YES" else "NO")
    }
}
