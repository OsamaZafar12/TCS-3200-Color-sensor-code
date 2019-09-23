bool Black()
{
  if((dataR<22&& dataR>14) && (dataG<22 && dataG>15) && (dataB<18 && dataB>11))
  //These are all RGB values taken
  {
    return true;
  }
  else
  {
    return false;
  }
}
