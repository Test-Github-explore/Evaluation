signal_info * start = malloc(num_of_records * sizeof(signal_info));
signal_info * point = (signal_info *)start;
point = start + temp_num - 1; 
memcpy(point->sig_desc, tmp2, strlen(tmp2));
/* ... */ 