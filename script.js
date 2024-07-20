// Fungsi untuk menampilkan pesan saat tombol diklik
function tampilkanPesan() {
    alert("Halo! Anda telah mengklik tombol.");
}

// Fungsi untuk mengubah teks dalam paragraf
function ubahTeks() {
    const paragraf = document.getElementById("paragraf");
    paragraf.textContent = "Teks telah diubah menggunakan JavaScript!";
}

// Fungsi untuk menambahkan item ke daftar
function tambahkanItem() {
    const daftar = document.getElementById("daftar");
    const itemBaru = document.createElement("li");
    itemBaru.textContent = "Item baru";
    daftar.appendChild(itemBaru);
}

// Fungsi untuk menghapus item terakhir dari daftar
function hapusItem() {
    const daftar = document.getElementById("daftar");
    if (daftar.lastChild) {
        daftar.removeChild(daftar.lastChild);
    }
}
