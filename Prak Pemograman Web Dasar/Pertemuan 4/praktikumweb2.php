<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>Percabangan</h1>
    <h3>IF ELSE</h3>

    <?php
    $nilai = 85;
    if($nilai >= 80){
        echo "Nilai anda $nilai dan Anda lulus";
    } else {
        echo "Nilai anda $nilai dan Anda tidak lulus";
    }

    ?>
    <h3>SWITCH</h3>

    <?php
    $nilai = "A";
    switch ($nilai){
        case 'A':
            echo "Nilai anda Baik Sekali";
            break;
        case 'B':
            echo "Nilai anda Baik ";
            break;
        case 'C':
            echo "Nilai anda Kurang";
            break;
        default;
            echo "Anda Tidak Lulus";
            break;
    }
    ?>

    <h1>Perulangan</h1>
    <h3>FOR</h3>

    <?php
    for ($i = 1;$i <= 10; $i++){
        echo "Perulangan ke-$i <br>";
    }
    ?>

    <h3>WHILE</h3>
    <?php
    $i = 1;
    while ($i <= 10) {
        echo "Perulangan ke-$i <br>";
        $i++;
    }
    ?>

    <h3>DO WHILE</h3>
    <?php
    $i=11;
    do {
        echo "Pengulangan ke-$i <br>";
        $i++;
    } while ($i <= 10);
    ?>

    <h3>ARRAY</h3>
    <?php
    $FTI = array('SI','IF','TI','TK',);
    echo $FTI[3];
    echo "<br>";
    print_r($FTI);
    ?>

    <br><br><br>

    <h3></h3>


</body>
</html>