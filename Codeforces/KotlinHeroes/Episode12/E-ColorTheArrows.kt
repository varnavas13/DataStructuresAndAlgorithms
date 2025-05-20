import java.io.*
import java.util.*
import kotlin.math.*

fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val t = br.readLine().toInt()
    val out = StringBuilder()
    repeat(t) {
        val n = br.readLine().toInt()
        val d = br.readLine().toCharArray() 
        val c = br.readLine().split(" ").map { it.toLong() }
        
        val incEnd = LongArray(n) 
        val decEnd = LongArray(n) 
        val incStart = LongArray(n) 
        val decStart = LongArray(n) 
        
        var bestForInc = 0L
        for (i in 0 until n) {
            incEnd[i] = c[i] + max(0L, bestForInc)
           if (d[i]=='>') {
                bestForInc = max(bestForInc, incEnd[i])
            }
        }
        
        var bestForDec = 0L
        for (i in n-1 downTo 0) {
            decEnd[i] = c[i] + max(0L, bestForDec)
            if (d[i]=='<') {
                bestForDec = max(bestForDec, decEnd[i])
            }
        }
        
        
        bestForInc = 0L
        for (i in n-1 downTo 0) {
            if (d[i]=='>') {
                incStart[i] = c[i] + bestForInc
            } else {
                incStart[i] = c[i] 
            }
            if (d[i]=='>') {
                bestForInc = max(bestForInc, incStart[i])
            }
        }
        
        bestForDec = 0L
        for (i in 0 until n) {
            if (d[i]=='<') {
                decStart[i] = c[i] + bestForDec
            } else {
                decStart[i] = c[i]
            }
            if (d[i]=='<') {
                bestForDec = max(bestForDec, decStart[i])
            }
        }
        
        var ans = 0L
        ans = max(ans, incEnd.maxOrNull() ?: 0L)
        ans = max(ans, decEnd.maxOrNull() ?: 0L)
        var cand = 0L
        for (i in 0 until n) {
            if (d[i]=='>') { 
                cand = max(cand, decEnd[i] + incStart[i] - c[i])
            }
        }
        ans = max(ans, cand)
        cand = 0L
        for (i in 0 until n) {
            if (d[i]=='<') { 
                cand = max(cand, incEnd[i] + decStart[i] - c[i])
            }
        }
        ans = max(ans, cand)
        
        out.appendln(ans)
    }
    print(out)
}
