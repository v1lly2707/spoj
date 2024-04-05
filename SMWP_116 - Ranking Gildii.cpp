#include <bits/stdc++.h>
using namespace std;

struct Player
{
	string PlayersNames;
	int Lvl;
	double KDRatio;
	bool operator < (const Player& x)const
	{
		if (Lvl == x.Lvl)
		{
			if (KDRatio == x.KDRatio)
			{
				return PlayersNames < x.PlayersNames;
			}
			return KDRatio > x.KDRatio;
		}
		return Lvl > x.Lvl;
	}
};
struct Guild
{
	vector < Player > sorting;
	string GuildsName;
	Player elo;
	double GuildsPoints;
	int PlayersAmount;
	bool operator < (const Guild& x)const
	{
		if (GuildsPoints == x.GuildsPoints)
		{
			if (PlayersAmount == x.PlayersAmount)
			{
				return GuildsName < x.GuildsName;
			}
			return PlayersAmount > x.PlayersAmount;
		}
		return GuildsPoints > x.GuildsPoints;
	}


};
Guild GuildStr[100005];
int main()
{
	int x;
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cin >> x;
	for (int i = 0; i < x; i++)
	{

		cin >> GuildStr[i].GuildsName >> GuildStr[i].GuildsPoints;
		cin >> GuildStr[i].PlayersAmount;

		for (int j = 0; j < GuildStr[i].PlayersAmount; j++)
		{
			cin >> GuildStr[i].elo.PlayersNames >> GuildStr[i].elo.Lvl >> GuildStr[i].elo.KDRatio;
			GuildStr[i].sorting.push_back(GuildStr[i].elo);
		}

	}
	for (int j = 0; j < x; j++)
		sort(GuildStr[j].sorting.begin(), GuildStr[j].sorting.end());



	sort(GuildStr, GuildStr + x);
	for (int i = 0; i < x; i++)
	{
		cout << GuildStr[i].GuildsName << ':' << endl;

		for (int j = 0; j < GuildStr[i].sorting.size(); j++)

			cout << GuildStr[i].sorting[j].PlayersNames << endl;


		cout << endl;
	}


	return 0;
}
