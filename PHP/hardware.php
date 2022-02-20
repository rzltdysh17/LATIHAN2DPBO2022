<?php

// Kelas Hardware Turunan Kelas Product 
class Hardware extends Product
{
    private $brand = "";
    private $model = "";

    // Constructor
    public function __construct($brand = "", $model = "")
    {
        $this->brand = $brand;
        $this->model = $model;
    }

    // Setter
    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    public function setModel($model)
    {
        $this->model = $model;
    }

    // Getter
    public function getBrand()
    {
        return $this->brand;
    }

    public function getModel()
    {
        return $this->model;
    }
}

?>