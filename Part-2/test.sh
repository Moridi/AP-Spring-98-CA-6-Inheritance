# ./test.sh <main.cpp path> <executable file name>

counter=0
for i in {1..20}
do
    cp testcases/$i/main.cpp $1/
    make
    ./$2 2>&1 | diff testcases/$i/$i.txt -
    if ! ./$2 2>&1 | diff -rq testcases/$i/$i.txt -; then
        echo "$i - Failed!"
    else
        echo "$i - Passed!"
        counter=$(( counter + 1 ));
    fi
done

echo -e "\n########\t$counter test cases passed!\t########"
