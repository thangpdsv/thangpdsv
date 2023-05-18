#include <iostream>

int calculateTimeToEliminate(int bTimeReloadEachBullet, int cTimeReloadAllBullet, int mAmountBullet, int nNumCreep, int rTimeToShoot) {
    int timeToEliminate = 0;
    int remainingCreep = nNumCreep;
    int bulletCount = mAmountBullet;
    if (nNumCreep == 0 || mAmountBullet == 0)
        return timeToEliminate;
    // Shoot until there are no more creeps
    while (remainingCreep > 0) {
        // Check if enough bullets are available to shoot
        if (bulletCount >= remainingCreep) {
            // Shoot remaining creeps
            timeToEliminate += remainingCreep * rTimeToShoot;
            bulletCount -= remainingCreep;
            remainingCreep = 0;
        } else {
            // Shoot all available bullets
            timeToEliminate += bulletCount * rTimeToShoot;
            remainingCreep -= bulletCount;

            // Reload bullets
            if (bTimeReloadEachBullet <= cTimeReloadAllBullet) {
                // Reload one bullet at a time
                timeToEliminate += bulletCount * bTimeReloadEachBullet;
            } else {
                // Reload all bullets at once
                timeToEliminate += cTimeReloadAllBullet;
            }

            // Refill bullet count
            bulletCount = mAmountBullet;
        }
    }

    return timeToEliminate;
}

int main() {
    int bTimeReloadEachBullet, cTimeReloadAllBullet, mAmountBullet, nNumCreep, rTimeToShoot;
    std::cin >> bTimeReloadEachBullet >> cTimeReloadAllBullet >> mAmountBullet >> nNumCreep >> rTimeToShoot;

    int timeToEliminate = calculateTimeToEliminate(bTimeReloadEachBullet, cTimeReloadAllBullet, mAmountBullet, nNumCreep, rTimeToShoot);

    std::cout << timeToEliminate << std::endl;

    return 0;
}