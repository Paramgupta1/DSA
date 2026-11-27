class Solution:
    def maximumSaleItems(self, items: List[List[int]], budget: int) -> int:
        n = len(items)
        INF = float('-inf')

        dp = [INF] * (budget + 1)
        dp[0] = 0

        for i in range(n):
            factor, price = items[i]

            free = 0
            for j in range(n):
                if i != j and items[j][0] % factor == 0:
                    free += 1

            buy = [INF] * (budget + 1)

            for cost in range(price, budget + 1):
                first = dp[cost - price] + free + 1
                again = buy[cost - price] + 1

                buy[cost] = max(first, again)

            for cost in range(budget + 1):
                dp[cost] = max(dp[cost], buy[cost])

        return max(dp)