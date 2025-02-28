<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Latihan PHP</title>
</head>
<body>
    <?php
    $nama = "Rafi'i Maulana";
    $umur = 20;
    $hobi = "Membantu Orangtua";

    echo "Tanggal hari ini adalah " . date("d-m-Y") . "<br>";
    echo "<br>";
    echo "Nama saya adalah $nama <br>";
    echo "Saya berumur $umur tahun <br>";
    echo "Hobi saya adalah $hobi <br><br>";
        
    ?>

    <form action="output.php" method="post">
        Nama : <input type="text" name="nama"><br>
        Umur : <input type="text" name="umur"><br>
        Hobi : <input type="text" name="hobi"><br>
        <input type="submit" value="Pencet">
    </form>

    <br><br><br><br>

    <?php
    $hari = "Minggu";
    if ($hari == "Senin") {
        echo "Hari ini Kuliah";
    }else {
        echo "Hari ini Libur";
    }
    ?>
    <br><br><br><br>

    <?php
    echo "Perulangan <br><br>";

    for ($i=1; $i <= 10; $i++) { 
        echo "Perulangan ke-$i <br>";
    }
    ?>

    

</body>
</html>