bool Blue()
{
  if((dataR<16 && dataR>12) && (dataG<14 && dataG>12) && (dataB<10 && dataB>7))
  {
    return true;
  }
  else
  {
    return false;
  }
}
