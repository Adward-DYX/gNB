#include "nfapi/oai_integration/vendor_ext.h"


int oai_nfapi_hi_dci0_req(nfapi_hi_dci0_request_t *hi_dci0_req)             { return(0);  }
int oai_nfapi_tx_req(nfapi_tx_request_t *tx_req)                            { return(0);  }
int oai_nfapi_dl_config_req(nfapi_dl_config_request_t *dl_config_req)       { return(0);  }
//int oai_nfapi_ul_config_req(nfapi_ul_config_request_t *ul_config_req)       { return(0);  }
int oai_nfapi_dl_tti_req(nfapi_nr_dl_tti_request_t *dl_config_req)
{
  return (0);
}
int oai_nfapi_tx_data_req(nfapi_nr_tx_data_request_t *tx_data_req)
{
  return (0);
}
int oai_nfapi_ul_dci_req(nfapi_nr_ul_dci_request_t *ul_dci_req)
{
  return (0);
}
int oai_nfapi_ul_tti_req(nfapi_nr_ul_tti_request_t *ul_tti_req)
{
  return (0);
}
int oai_nfapi_nr_rx_data_indication(nfapi_nr_rx_data_indication_t *ind)
{
  return (0);
}
int oai_nfapi_nr_crc_indication(nfapi_nr_crc_indication_t *ind)
{
  return (0);
}
int oai_nfapi_nr_srs_indication(nfapi_nr_srs_indication_t *ind)
{
  return (0);
}
int oai_nfapi_nr_uci_indication(nfapi_nr_uci_indication_t *ind)
{
  return (0);
}
int oai_nfapi_nr_rach_indication(nfapi_nr_rach_indication_t *ind)
{
  return (0);
}

int pack_nr_srs_beamforming_report(void *pMessageBuf, void *pPackedBuf, uint32_t packedBufLen)
{
  return 0;
}
int pack_nr_srs_normalized_channel_iq_matrix(void *pMessageBuf, void *pPackedBuf, uint32_t packedBufLen)
{
  return 0;
}

int32_t get_uldl_offset(int nr_bandP)
{
  return (0);
}
NR_IF_Module_t *NR_IF_Module_init(int Mod_id)
{
  return (NULL);
}
nfapi_mode_t nfapi_mod;
nfapi_mode_t nfapi_getmode(void)
{
  return nfapi_mod;
}
void nfapi_setmode(nfapi_mode_t nfapi_mode)
{
}

int dummy_nr_ue_dl_indication(nr_downlink_indication_t *dl_info)
{
  return (0);
}
int dummy_nr_ue_ul_indication(nr_uplink_indication_t *ul_info)              { return(0);  }
void nr_fill_dl_indication(nr_downlink_indication_t *dl_ind,
                           fapi_nr_dci_indication_t *dci_ind,
                           fapi_nr_rx_indication_t *rx_ind,
                           UE_nr_rxtx_proc_t *proc,
                           PHY_VARS_NR_UE *ue,
                           void *phy_data) {}
void nr_fill_rx_indication(fapi_nr_rx_indication_t *rx_ind,
                           uint8_t pdu_type,
                           PHY_VARS_NR_UE *ue,
                           NR_UE_DLSCH_t *dlsch0,
                           NR_UE_DLSCH_t *dlsch1,
                           uint16_t n_pdus,
                           UE_nr_rxtx_proc_t *proc,
                           void *typeSpecific ) {}
