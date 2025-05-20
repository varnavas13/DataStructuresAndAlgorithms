import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.StringTokenizer

const val MOD = 998244353

class Combinatorics(val maxN: Int, val mod: Int) {
    val fact = LongArray(maxN + 1)
    val invFact = LongArray(maxN + 1)
    
    init {
        fact[0] = 1L
        for (i in 1..maxN) {
            fact[i] = fact[i - 1] * i % mod
        }
        invFact[maxN] = modInv(fact[maxN], mod.toLong())
        for (i in maxN downTo 1) {
            invFact[i - 1] = invFact[i] * i % mod
        }
    }
    
    fun nCr(n: Int, r: Int): Long {
        if(r < 0 || r > n) return 0
        return fact[n] * invFact[r] % mod * invFact[n - r] % mod
    }
}

fun modPow(base: Long, exp: Long, mod: Long): Long {
    var result = 1L
    var b = base % mod
    var e = exp
    while (e > 0) {
        if (e and 1L == 1L) {
            result = (result * b) % mod
        }
        b = (b * b) % mod
        e = e shr 1
    }
    return result
}

fun modInv(x: Long, mod: Long): Long = modPow(x, mod - 2, mod)

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val n = br.readLine().toInt()
    val st = StringTokenizer(br.readLine())
    val a = LongArray(n) { st.nextToken().toLong() }
    
    var sumA = 0L
    for (x in a) sumA += x
    
    val b = LongArray(n)
    for (i in 0 until n) {
        b[i] = (n - (i + 1)).toLong() - a[i]
    }
    
    val sortedB = b.sortedDescending()
    
    val prefix = LongArray(n + 1)
    prefix[0] = 0L
    for (i in 0 until n) {
        prefix[i + 1] = prefix[i] + sortedB[i]
    }
    
   var bestBonus = Long.MIN_VALUE
    for (k in 0..n) {
        val candidate = prefix[k] - (k.toLong() * (k - 1) / 2)
        if (candidate > bestBonus) {
            bestBonus = candidate
        }
    }
    
   val comb = Combinatorics(n, MOD)
    var ways: Long = 0
    for (k in 0..n) {
        val candidate = prefix[k] - (k.toLong() * (k - 1) / 2)
        if (candidate == bestBonus) {
            if (k == 0) {
                ways = (ways + 1) % MOD
            } else {
                val x = sortedB[k - 1]
                var totalX = 0
                for (v in sortedB) {
                    if (v == x) totalX++
                }
                var countX = 0
                for (i in 0 until k) {
                    if (sortedB[i] == x) countX++
                }
                val waysForK = comb.nCr(totalX, countX)
                ways = (ways + waysForK) % MOD
            }
        }
    }
    
    val maxIncome = sumA + bestBonus
    println("$maxIncome $ways")
}
