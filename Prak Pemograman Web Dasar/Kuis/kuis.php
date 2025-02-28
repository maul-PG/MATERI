<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>kuis php</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
  
    <style>
        
        form{
            color : black;
            margin: 0 auto;
            width: 50%;
            padding: 1em;
            border: 1px solid #ccc;
            border-radius: 1em;
        }
    </style>

    </head>

  <body>
    <?php
    $bilangan1 = <input type="text" name="bilangan1"><br>
    $bilangan2 = <input type="text" name="bilangan2"><br>
    $Penjumlahan = 1;
    $Perkalian = 2;
    $Pembagian = 3;
    $Pengurangan = 4;
    ?>
<form action="output.php" method="post">
  <div class="mb-3">
    <label for="exampleInputEmail1" class="form-label">Bilangan 1</label>
    <input type="bilangan 1" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp">
  </div>
  <div class="mb-3">
    <label for="exampleInputPassword1" class="form-label">Bilangan 2</label>
    <input type="bilangan 2"  class="form-control" id="exampleInputPassword1">
  </div>
  <select class="form-select form-select-lg mb-3" aria-label="Large select example">
  <option selected>Perhitungan</option>
  <option value="1">Penjumlahan</option>
  <option value="2">Perkalian</option>
  <option value="3">Pembagian</option>
  <option value="4">Pengurangan</option>
    </select>
    <?php
    if ($Penjumlahan==1){
        echo $bilangan1 + $bilangan2;}
    if ($Perkalian==2){
        echo $bilangan1 * $bilangan2;}
    if ($Pembagian==3){
        echo $bilangan1 / $bilangan2;}
    if ($Pengurangan==4){
        echo $bilangan1 - $bilangan2;}
    ?>

  <button type="submit" class="btn btn-primary">Submit</button>
</form>
        

  
    
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
  </body>
</html>