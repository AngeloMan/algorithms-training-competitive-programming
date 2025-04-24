# position = [4,1,0,7] 
# speed = [2,2,1,1]
# cars = sorted([[position[i], speed[i]] for i in range(len(position))], reverse = True)
# print(cars)
class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        cars = sorted([[position[i], speed[i]] for i in range(len(position))], reverse = True)
        fleet = [(target - cars[0][0])/cars[0][1]]
        for c in cars:
            time = (target - c[0])/c[1]
            if time > max(fleet):
                fleet.append(time)

        return len(fleet)