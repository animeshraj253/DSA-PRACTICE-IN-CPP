#include <bits/stdc++.h>
#include<string>
using namespace std;
int main() {
        try {
            // Read start and end arrays
            string startLine;
            getline(cin,startLine);
            string endLine ;//sc.nextLine().trim();
            getline(cin,endLine);

            if (startLine.empty() || endLine.empty()) {
                cout<<"Invalid Input";
                return;
            }

            string startStr [] =startLine.
            string endStr[] = endLine.split("\\s+");

            if (startStr.length != endStr.length || startStr.length <= 1) {
                System.out.println("Invalid Input");
                return;
            }

            int n = startStr.length;
            List<int[]> intervals = new ArrayList<>();
            int invalidCount = 0;

            // Parse input and check invalid intervals
            for (int i = 0; i < n; i++) {
                int start = Integer.parseInt(startStr[i]);
                int end = Integer.parseInt(endStr[i]);
                if (start >= end) {
                    invalidCount++;
                } else {
                    intervals.add(new int[]{start, end});
                }
            }

            if (intervals.isEmpty()) {
                System.out.println();
                System.out.println(0);
                System.out.println(invalidCount);
                return;
            }

            // Sort intervals by start time
            intervals.sort(Comparator.comparingInt(a -> a[0]));

            List<int[]> merged = new ArrayList<>();
            int[] prev = intervals.get(0);

            int nonOverlappingCount = 0;

            for (int i = 1; i < intervals.size(); i++) {
                int[] curr = intervals.get(i);

                if (curr[0] > prev[1]) {
                    // No overlap
                    merged.add(prev);
                    prev = curr;
                } else {
                    // Overlap, merge
                    prev[1] = Math.max(prev[1], curr[1]);
                }
            }
            merged.add(prev);

            // Count non-overlapping intervals
            nonOverlappingCount = merged.size();

            // Print merged intervals
            List<Integer> mergedList = new ArrayList<>();
            for (int[] interval : merged) {
                mergedList.add(interval[0]);
                mergedList.add(interval[1]);
            }

            for (int i = 0; i < mergedList.size(); i++) {
                System.out.print(mergedList.get(i));
                if (i != mergedList.size() - 1) System.out.print(" ");
            }
            System.out.println();

            System.out.println(nonOverlappingCount);
            System.out.println(invalidCount);

        } 
        catch (Exception e) {
            System.out.println("Invalid Input");
        } finally {
            sc.close();
        }
    return 0;
}