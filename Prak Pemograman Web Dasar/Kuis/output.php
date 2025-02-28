<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Output</title>
</head>
<body>
    <?php
    echo "Hasil Penjumalahan adalah " . $_POST['bilangan1'] + $_POST['bilangan2'] . "<br>";
    echo "Hasil Perkalian adalah " . $_POST['bilangan1'] * $_POST['bilangan2'] . "<br>";
    echo "Hasil Pembagian adalah " . $_POST['bilangan1'] / $_POST['bilangan2'] . "<br>";
    echo "Hasil Pengurangan adalah " . $_POST['bilangan1'] - $_POST['bilangan2'] . "<br>";
    ?>
</body>
</html>