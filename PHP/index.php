<?php

include "product.php";
include "hardware.php";
include "memory.php";

// Setter
$data = new Memory();
$data->setPrice(500000);
$data->setIdProduct("RAM2400");
$data->setBrand("Kingston");
$data->setModel("DDR4");
$data->setFrequency("2400CC");
$data->setMemorySize("8GB");
$data->setSupportsCuda("-");

// Print Data
echo "========================================"."<br>";
echo "Deskripsi Memory :"."<br>";
echo "========================================"."<br>";
echo "Harga           : ".$data->getPrice()."<br>";
echo "ID Produk       : ".$data->getIdProduct()."<br>";
echo "Merk            : ".$data->getBrand()."<br>";
echo "Model           : ".$data->getModel()."<br>";
echo "Frekuensi       : ".$data->getFrequency()."<br>";
echo "Ukuran Memori   : ".$data->getMemorySize()."<br>";
echo "Support Cuda    : ".$data->getSupportsCuda()."<br>";
echo "========================================"."<br>";

?> 