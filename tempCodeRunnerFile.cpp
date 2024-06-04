  int totrow, totcol;
    cout << "Enter The Value of Row : ";
    cin >> totrow;
    cout << "Enter The Value of col: ";
    cin >> totcol;

    for (int i = 0; i < totrow; i++)
    {
        for (int j = 0; j < totcol; j++)
        {
            if (i == 0 || i == totrow || j == 0 || j == totcol)
            {
                cout << " * ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
