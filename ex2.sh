# !/bin/bash
echo "Enter two numbers for performing the calculation : " #asking user for 2 numbers
read a
read b

echo "Enter your choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Remainder"
echo "6. Power"
read ch

case $ch in                 #switch case to calculate corresponding option
  1)res=`echo $a + $b | bc`
  echo "Result : $res"
  ;;
  2)res=`echo $a - $b | bc`
  echo "Result : $res"
  ;;
  3)res=`echo $a \* $b | bc`
  echo "Result : $res"
  ;;
  4)res=`echo "scale=2; $a / $b" | bc`
  echo "Result : $res"
  ;;
  5)res=`echo $a % $b | bc`
  echo "Result : $res"
  ;;
  6)res=`echo "$a^$b" | bc`
  echo "Result : $res"
  ;;
  *)
  echo "Invalid Input"
  ;;
esac
