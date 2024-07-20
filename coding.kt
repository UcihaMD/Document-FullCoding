
import kotlin.math.PI

fun luasLingkaran(radius: Double): Double {
    return PI * radius * radius
}

fun main() {
    print("Masukkan jari-jari lingkaran: ")
    val radius = readLine()!!.toDouble()
    println("Luas lingkaran dengan jari-jari $radius adalah ${luasLingkaran(radius)}")
}

import java.io.File

fun main() {
    val fileName = "data.txt"

    // Menulis ke file
    File(fileName).printWriter().use { out ->
        out.println("Ini adalah contoh teks yang ditulis ke file.")
        out.println("Baris kedua dari file.")
    }

    // Membaca dari file
    File(fileName).forEachLine { println(it) }
}
