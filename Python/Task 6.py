def func():
    service_time= [140, 215, 75, 130, 85]
    min_n = service_time.index(min(service_time))
    max_element = max(service_time)

    print("Service time: ")
    for i in range(len(service_time)):
        print("{0} buyer: {1}(seconds)".format(i+1, service_time[i]))

    print("Number of the buyer who was served the fastest:",min_n+1,
          "\nTime of the longest service in the queue: ", max_element, "seconds.")
func()