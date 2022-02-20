<?php

// Kelas Memory Turunan Kelas Hardware 
class Memory extends Hardware
{
    private $frequency = "";
    private $memorySize = "";
    private $supportsCuda = "";

    // Constructor
    public function __construct($frequency = "", $memorySize = "", $supportsCuda = "")
    {
        $this->frequency = $frequency;
        $this->memorySize = $memorySize;
        $this->supportsCuda = $supportsCuda;
    }

    // Setter
    public function setFrequency($frequency)
    {
        $this->frequency = $frequency;
    }

    public function setMemorySize($memorySize)
    {
        $this->memorySize = $memorySize;
    }

    public function setSupportsCuda($supportsCuda)
    {
        $this->supportsCuda = $supportsCuda;
    }

    // Getter
    public function getFrequency()
    {
        return $this->frequency;
    }

    public function getMemorySize()
    {
        return $this->memorySize;
    }

    public function getSupportsCuda()
    {
        return $this->supportsCuda;
    }
}

?>