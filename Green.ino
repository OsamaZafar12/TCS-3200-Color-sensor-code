bool Green()
{
  if((dataR<53 && dataR>47) && (dataG<44 && dataG>38) && (dataB<34 && dataB>28))
  {
    return true;
  }
  else
  {
    return false;
  }
}
