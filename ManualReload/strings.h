#pragma once

static LPCTSTR en_US[]{
    "Reload"
};

static LPCTSTR fr_FR[]{
    "Recharger"
};

static LPCTSTR de_DE[]{
    "Nachladen"
};

static LPCTSTR it_IT[]{
    "Ricarica"
};

static LPCTSTR es_ES[]{
    "Recargar"
};

static LPCTSTR pt_BR[]{
    "Recarregar"
};

static LPCTSTR pl_PL[]{
    "Przeładowanie"
};

static LPCTSTR ru_RU[]{
    "Перезарядка оружия"
};

static LPCTSTR ko_KR[]{
    "재장전"
};

static LPCTSTR zh_CN[]{
    "補彈"
};

static LPCTSTR ja_JP[]{
    "リロード"
};

enum GlobalTextEntry_t {
    RELOAD_TEXT
};

static LPCTSTR* langtext_array[11]{
    en_US,
    fr_FR,
    de_DE,
    it_IT,
    es_ES,
    pt_BR,
    pl_PL,
    ru_RU,
    ko_KR,
    zh_CN,
    ja_JP
};

inline LPCTSTR getConstString(int langugageId, GlobalTextEntry_t textId) {
    return langtext_array[langugageId][textId];
}
