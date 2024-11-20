
# testcase = int(input())
# while(testcase>0):
#     number = int(input())
#     encoded_string = input()

#     r = ''.join(sorted(set(encoded_string)))

    
#     symmetric_map = {r[i]: r[-i-1] for i in range(len(r))}

#     reverse_map = {v: k for k, v in symmetric_map.items()}

#     decoded_string = ''.join(reverse_map[char] for char in encoded_string)

#     print(decoded_string)
#     testcase -= 1


# without list comprehension
testcase = int(input())

while testcase > 0:
    number = int(input())
    encoded_string = input()
    
    # Create the auxiliary string r from the encoded string
    unique_chars = set(encoded_string)
    sorted_unique_chars = sorted(unique_chars)
    r = ''.join(sorted_unique_chars)
    print(r)
    # Create the symmetric mapping
    symmetric_map = {}
    for i in range(len(r)):
        symmetric_map[r[i]] = r[-i-1]

    print(symmetric_map)
    
    # Create the reverse mapping
    reverse_map = {}
    for k, v in symmetric_map.items():
        reverse_map[v] = k

    print(reverse_map)
    
    # # Decode the encoded_string using the reverse_map
    # decoded_string = ''
    # for char in encoded_string:
    #     decoded_string += reverse_map[char]
    
    # print(decoded_string)
    testcase -= 1
