import pandas as pd
import json
import matplotlib.pyplot as plt

f = open('data.json')

data = json.load(f)

# print(data)
df = pd.read_json("data.json")
print(df)

plt.plot(df["a"], df["time"])
plt.plot(df["b"], df["time"])
plt.plot(df["c"], df["time"])
plt.show() 