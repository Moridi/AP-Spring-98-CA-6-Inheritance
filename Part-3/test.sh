# ./test.sh <main.cpp path> <executable file name>

# defining colors
RED="\033[0;31m"
GREEN="\033[0;32m"
CYAN="\033[0;36m"
NC='\033[0m' # No Color

make clean

counter=0
for i in {1..6}
do
    cp testcases/$i/main.cpp $1/
    make clean
    make
    ./$2 2>&1 | diff testcases/$i/$i.txt -
    if ! ./$2 2>&1 | diff -rq -B testcases/$i/$i.txt -; then
        echo -e "${RED}$i - Failed!${NC}"
    else
        echo -e "${GREEN}$i - Passed!${NC}"
        counter=$(( counter + 1 ));
    fi
done

echo -e "\n########\t${GREEN}$counter test cases passed!${NC}\t########"