<?php

// Kelas Product
class Product
{
    private $price = 0;
    private $idProduct = "";

    // Constructor
    public function __construct($price = 0, $idProduct = "")
    {
        $this->price = $price;
        $this->idProduct = $idProduct;
    }

    // Setter
    public function setPrice($price)
    {
        $this->price = $price;
    }

    public function setIdProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }

    // Getter
    public function getPrice()
    {
        return $this->price;
    }

    public function getIdProduct()
    {
        return $this->idProduct;
    }
}

?>