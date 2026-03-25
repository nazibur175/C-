import pandas as pd

# CSV file load
df = pd.read_csv('lab_test.csv')

# ধরো URL/protocol info column নাম হচ্ছে 'Protocol' (Wireshark export default)
# শুধু HTTPS গুন
https_count = df[df['Protocol'].str.lower() == 'https'].shape[0]

print(f"Total HTTPS packets: {https_count}")
