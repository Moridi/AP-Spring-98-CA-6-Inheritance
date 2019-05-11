# ./run.sh <runner path> <student code path>

# defining colors
RED="\033[0;31m"
GREEN="\033[0;32m"
CYAN="\033[0;36m"
NC='\033[0m' # No Color

for i in {1..3}
do
    if [ -d $2/$i ]; then
        cp -r $1/Part-$i/testcases $1/Part-$i/test.sh $2/$i
        echo -e "${GREEN}Part-$i copied!${NC}"
    else
        echo -e "${RED}There's no Part-$i!${NC}"
    fi
done
