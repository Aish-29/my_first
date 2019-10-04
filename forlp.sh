var=12
for i in `seq 10`
do
    ans=` expr $var \* $i `
    echo $var x $i = $ans
done
