/*
 * Copyright (c) 2011-2018, Zingaya, Inc. All rights reserved.
 */

'use strict';

import { StyleSheet } from 'react-native';
import COLOR from "./Color";

export default StyleSheet.create({
    safearea: {
        flex: 1,
        backgroundColor: COLOR.WHITE,
    },
    aligncenter: {
        flexDirection: 'column',
        justifyContent: 'center'
    },
    modalBackground: {
        backgroundColor: 'rgba(0, 0, 0, 0.5)',
        padding: 20
    },
    innerContainer: {
        borderRadius: 10,
    },
    innerContainerTransparent: {
        backgroundColor: COLOR.WHITE,
        padding: 20
    },
    appheader: {
        resizeMode: 'contain',
        height: 60,
        alignSelf: 'center'
    },
    loginform: {
        paddingHorizontal: 20,
        alignItems: 'stretch'
    },
    loginbutton: {
        color: COLOR.PRIMARY_DARK,
        fontSize: 16,
        alignSelf: 'center',
        paddingTop: 20,
        textAlign: 'center'
    },
    forminput: {
        padding: 5,
        marginBottom: 10,
        color: COLOR.ACCENT,
        height: 40,
        borderColor: COLOR.ACCENT,
        borderWidth: 1.5,
        borderRadius: 4,
    },
    useragent: {
        flex: 1,
        flexDirection: 'column',
    },
    selfview: {
        position: 'absolute',
        right: 20,
        bottom: 20,
        width: 100,
        height: 120,
    },
    remotevideo: {
        flex: 1,
    },
    videoPanel: {
        flex: 1,
        position: 'relative'
    },
    call_controls: {
        height: 70,
    },
    margin: {
        margin: 15
    },
    call_connecting_label: {
        fontSize: 18,
        alignSelf: 'center'
    },
    headerButton: {
        color: COLOR.WHITE,
        fontSize: 16,
        alignSelf: 'center',
        paddingLeft: 10,
        paddingRight: 10,
        paddingBottom: 5,
        textAlign: 'center'
    },
    incoming_call: {
        justifyContent: 'center',
        alignSelf: 'center',
        fontSize: 22,
    },
    buttonText: {
        textAlign: 'center',
        color :COLOR.PRIMARY,
        fontWeight: 'bold',
        fontSize: 18
    },
    button: {
        marginVertical: 10,
        height: 50,
        backgroundColor: 'white',
        alignItems: 'center',
        justifyContent: 'center',
        borderRadius: 50,
        marginHorizontal: 40,
        borderWidth: 2,
        borderColor: COLOR.PRIMARY,
    },
    container: {
        flex: 1,
        backgroundColor: COLOR.PRIMARY,
        flexDirection: 'column',
    },
    disclaimerText: {
        marginTop: 30,
        fontSize: 12,
        color: 'white',
    },
});
