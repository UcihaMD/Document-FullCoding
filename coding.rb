# Menulis ke file
File.open("data.txt", "w") do |file|
    file.puts "Ini adalah contoh teks yang ditulis ke file."
    file.puts "Baris kedua dari file."
  end
  
  # Membaca dari file
  File.open("data.txt", "r") do |file|
    file.each_line { |line| puts line }
  end

  
  def cek_prima(n)
    return false if n <= 1
    (2..Math.sqrt(n).to_i).none? { |i| n % i == 0 }
  end
  
  print "Masukkan angka untuk diperiksa keprimaan: "
  number = gets.to_i
  if cek_prima(number)
    puts "#{number} adalah bilangan prima."
  else
    puts "#{number} bukan bilangan prima."
  end
  