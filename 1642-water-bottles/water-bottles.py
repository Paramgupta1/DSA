
class Solution:
    def numWaterBottles(self, numBottles: int, numExchange: int) -> int:
        full = numBottles
        empty = numBottles

        while empty >= numExchange:
            new_bottles = empty // numExchange
            empty = empty % numExchange
            full += new_bottles
            empty += new_bottles

        return full
